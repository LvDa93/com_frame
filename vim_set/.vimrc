" vim-plug
call plug#begin('~/.vim/plugged')
Plug 'itchyny/lightline.vim'
Plug 'jistr/vim-nerdtree-tabs'
Plug 'preservim/nerdtree'
Plug 'vim-scripts/winmanager'
Plug 'jlanzarotta/bufexplorer'
call plug#end()

" tab=4
set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab

" set the search high light
set hlsearch
