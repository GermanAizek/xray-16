#include "stdafx.h"
#include "xrCompress.h"

extern int ProcessDifference();

int __cdecl main(int argc, char* argv[])
{
    cpcstr params = GetCommandLine();

    xrDebug::Initialize(params);
    Core.Initialize("xrCompress", nullptr, nullptr, false);
    printf("\n\n");


    if (strstr(params, "-diff"))
    {
        ProcessDifference();
    }
    else
    {
        if (argc < 2)
        {
            printf("ERROR: u must pass folder name as parameter.\n");
            printf("-diff /? option to get information about creating difference.\n");
            printf("-xdb	- pack files into .xdb format\n");
            printf("-fast	- fast compression.\n");
            printf("-store	- store files. No compression.\n");
            printf("-max_size <MB>       - set maximum archive size. Default: [%zu MB]\n", xrCompressor::XRP_MAX_SIZE);
            printf("-ltx <file_name.ltx> - pathes to compress.\n");
            printf("\n");
            printf("LTX format:\n");
            printf("	[config]\n");
            printf("	;<path>     = <recurse>\n");
            printf("	.\\         = false\n");
            printf("	textures    = true\n");

            Core._destroy();
            return 3;
        }

        string_path folder;
        strconcat(sizeof(folder), folder, argv[1], "\\");
        _strlwr_s(folder, sizeof(folder));
        printf("\nCompressing files (%s)...\n\n", folder);

        FS._initialize(CLocatorAPI::flTargetFolderOnly, folder);
        FS.append_path("$working_folder$", "", nullptr, false);

        xrCompressor C;

        C.SetStoreFiles(nullptr != strstr(params, "-store"));
        C.SetFastMode(nullptr != strstr(params, "-fast"));
        C.SetPackingToXDB(nullptr != strstr(params, "-xdb"));
        C.SetTargetName(argv[1]);

        if (cpcstr temp = strstr(params, "-max_size"))
        {
            u32 size{};
            if (1 == sscanf(strstr(params, "-max_size ") + 9, "%u", &size))
            {
                const size_t final_size = 1024 * 1024 * size_t(size);
                C.SetMaxVolumeSize(final_size);
            }
        }

        cpcstr p = strstr(params, "-ltx");

        if (nullptr != p)
        {
            string64 ltx_name;
            sscanf(strstr(params, "-ltx ") + 5, "%[^ ] ", ltx_name);

            CInifile ini(ltx_name);
            printf("Processing LTX...\n");
            C.ProcessLTX(ini);
        }
        else
        {
            string64 header_name;
            sscanf(strstr(params, "-header ") + 8, "%[^ ] ", header_name);
            C.SetPackHeaderName(header_name);
            C.ProcessTargetFolder();
        }
    }

    Core._destroy();
    return 0;
}
