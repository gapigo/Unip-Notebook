import subprocess
#import commands


def dbc2csv(raw_filename):
    raw_files_dir = 'C:\\workspace\\Unip-Notebook\\7th Semester\\IC'
    raw_files_dir = '.'
    converted_files_dir = "C:\\workspace\\Unip-Notebook\\7th Semester\\IC\\converted"
    converted_files_dir = "converted"
    r_script = "C:\\workspace\\Unip-Notebook\\7th Semester\\IC\\script.r"
    r_script = 'script.r'
    
    dbc2csv_path = r_script + raw_files_dir + " " + converted_files_dir + " " + raw_filename

    try:
        r_script_path = subprocess.getstatusoutput('which Rscript')[1]
        print('OI')
        subprocess.call(r_script_path + " --vanilla " + dbc2csv_path, shell=True)
        return True
    except:
        print("(Rscript) Error converting file: " + raw_filename)

    return False

dbc2csv('DENGBR21.dbc')