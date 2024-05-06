#include "FormDataParser.h"
#include "parsetable.h"
bool save_file(const std::string& file, const void* data, size_t length, bool mk_dirs){

        if (mk_dirs){
            int p = (int)file.rfind('/');
        }

        FILE* f = fopen(file.c_str(), "wb");
        if (!f) return false;

        if (data && length > 0){
            if (fwrite(data, 1, length, f) != length){
                fclose(f);
                return false;
            }
        }
        fclose(f);
        return true;
    }

