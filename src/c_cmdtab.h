/*    c_cmdtab.h
 *
 *    Copyright (c) 2008, eFTE SF Group (see AUTHORS file)
 *    Copyright (c) 1994-1996, Marko Macek
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 */

#ifndef CMDTAB_H
#define CMDTAB_H

#include "c_commands.h"

#define TAB(x) \
    { Ex##x, #x }
#define TABS(x) \
    { Ex##x##Str, #x "$" }

const struct {
    unsigned short CmdId;
    const char *Name;
} Command_Table[] = {
    TAB(Nop),
    TAB(Fail),

    TAB(Exit),
    TAB(Push),
    TAB(Fetch),
    TAB(Store),
    TAB(MemEnd),
    TAB(Here),
    TAB(Allot),
    TAB(Dump),

    { ExPlus, "+" },
    { ExMinus, "-" },
    { ExMul, "*" },
    { ExDiv, "/" },

    TAB(And),
    TAB(Or),
    TAB(Xor),
    TAB(Shift),

    TAB(Equals),
    TAB(Less),
    TAB(Flag),
    TAB(Abort),

    TAB(Dup),
    TAB(Drop),
    TAB(Swap),
    TAB(Over),
    TAB(Rot),

    TAB(ToR),
    TAB(RFrom),
    TAB(RFetch),
    TAB(I),
    TAB(J),
    TAB(Times),
    TAB(Old),
    TAB(New),
    TAB(Does),

    TAB(Diag),

    TABS(Diag),
    TABS(Push),
    TABS(Dup),
    TABS(Drop),
    TABS(Swap),
    TABS(Compare),
    TABS(Over),
    TABS(Pick),
    TABS(Depth),
    TABS(SubSearch),
    TABS(Split),
    TABS(Merge),
    TABS(Rot),
    TABS(Len),
    TABS(Mid),
    TAB(GetString),

    TAB(ToggleConditionDisplay),

    TAB(CursorLeft),
    TAB(CursorRight),
    TAB(CursorUp),
    TAB(CursorDown),

    TAB(MoveLeft),
    TAB(MoveRight),
    TAB(MoveUp),
    TAB(MoveDown),
    TAB(MovePrev),
    TAB(MoveNext),
    TAB(MoveWordLeft),
    TAB(MoveWordRight),
    TAB(MoveWordPrev),
    TAB(MoveWordNext),
    TAB(MoveWordEndLeft),
    TAB(MoveWordEndRight),
    TAB(MoveWordEndPrev),
    TAB(MoveWordEndNext),
    TAB(MoveWordOrCapLeft),
    TAB(MoveWordOrCapRight),
    TAB(MoveWordOrCapPrev),
    TAB(MoveWordOrCapNext),
    TAB(MoveWordOrCapEndLeft),
    TAB(MoveWordOrCapEndRight),
    TAB(MoveWordOrCapEndPrev),
    TAB(MoveWordOrCapEndNext),
    TAB(MoveLineStart),
    TAB(MoveLineEnd),
    TAB(MovePageUp),
    TAB(MovePageDown),
    TAB(MovePageLeft),
    TAB(MovePageRight),
    TAB(MovePageStart),
    TAB(MovePageEnd),
    TAB(MoveFileStart),
    TAB(MoveFileEnd),
    TAB(MoveBlockStart),
    TAB(MoveBlockEnd),
    TAB(MoveFirstNonWhite),
    TAB(MoveLastNonWhite),
    TAB(MovePrevEqualIndent),
    TAB(MoveNextEqualIndent),
    TAB(MovePrevTab),
    TAB(MoveNextTab),
    TAB(MoveLineTop),
    TAB(MoveLineCenter),
    TAB(MoveLineBottom),
    TAB(ScrollLeft),
    TAB(ScrollRight),
    TAB(ScrollDown),
    TAB(ScrollUp),
    TAB(MoveTabStart),
    TAB(MoveTabEnd),

    TAB(KillLine),
    TAB(KillChar),
    TAB(KillCharPrev),
    TAB(KillWord),
    TAB(KillWordPrev),
    TAB(KillWordOrCap),
    TAB(KillWordOrCapPrev),
    TAB(KillToLineStart),
    TAB(KillToLineEnd),
    TAB(KillBlock),
    TAB(KillBlockOrChar),
    TAB(KillBlockOrCharPrev),
    TAB(BackSpace),
    TAB(Delete),
    TAB(CharCaseUp),
    TAB(CharCaseDown),
    TAB(CharCaseToggle),
    TAB(LineCaseUp),
    TAB(LineCaseDown),
    TAB(LineCaseToggle),
    TAB(LineInsert),
    TAB(LineAdd),
    TAB(LineSplit),
    TAB(LineJoin),
    TAB(LineNew),
    TAB(LineIndent),
    TAB(LineTrim),
    TAB(FileTrim),
    TAB(BlockTrim),

    TAB(InsertSpacesToTab),
    TAB(InsertTab),
    TAB(InsertSpace),
    TAB(WrapPara),
    TAB(InsPrevLineChar),
    TAB(InsPrevLineToEol),
    TAB(LineDuplicate),
    TABS(Selection),
    TAB(BlockBegin),
    TAB(BlockEnd),
    TAB(BlockUnmark),
    TAB(BlockCut),
    TAB(BlockCopy),
    TAB(BlockCutAppend),
    TAB(BlockCopyAppend),
    TAB(ClipClear),
    TAB(BlockPaste),
    TAB(BlockKill),
    TAB(BlockSort),
    TAB(BlockSortReverse),
    TAB(BlockIndent),
    TAB(BlockUnindent),
    TAB(BlockClear),
    TAB(BlockMarkStream),
    TAB(BlockMarkLine),
    TAB(BlockMarkColumn),
    TAB(BlockCaseUp),
    TAB(BlockCaseDown),
    TAB(BlockCaseToggle),
    TAB(BlockExtendBegin),
    TAB(BlockExtendEnd),
    TAB(BlockReIndent),
    TAB(BlockSelectWord),
    TAB(BlockSelectLine),
    TAB(BlockSelectPara),
    TAB(Undo),
    TAB(Redo),
    TAB(MatchBracket),
    TAB(MovePrevPos),
    TAB(MoveSavedPosCol),
    TAB(MoveSavedPosRow),
    TAB(MoveSavedPos),
    TAB(SavePos),
    TAB(CompleteWord),
    TAB(MoveToLine),
    TAB(MoveToColumn),
    TAB(BlockPasteStream),
    TAB(BlockPasteLine),
    TAB(BlockPasteColumn),
    TAB(BlockPasteOver),
    TAB(ShowPosition),

    TAB(FoldCreate),
    TAB(FoldCreateByRegexp),
    TAB(FoldDestroy),
    TAB(FoldDestroyAll),
    TAB(FoldPromote),
    TAB(FoldDemote),
    TAB(FoldOpen),
    TAB(FoldOpenNested),
    TAB(FoldClose),
    TAB(FoldOpenAll),
    TAB(FoldCloseAll),
    TAB(FoldToggleOpenClose),
    TAB(MoveFoldTop),
    TAB(MoveFoldPrev),
    TAB(MoveFoldNext),

    TAB(PlaceBookmark),
    TAB(RemoveBookmark),
    TAB(GotoBookmark),

    TAB(InsertString),
    TAB(SelfInsert),
    TAB(FilePrev),
    TAB(FileNext),
    TAB(FileLast),
    TAB(SwitchTo),

    TAB(FileReload),
    TAB(FileSave),
    TAB(FileSaveAll),
    TAB(FileSaveAs),
    TAB(FileWriteTo),
    TAB(FileOpen),
    TAB(FileOpenInMode),
    TAB(FilePrint),

    TAB(BlockPrint),
    TAB(BlockRead),
    TAB(BlockReadStream),
    TAB(BlockReadLine),
    TAB(BlockReadColumn),
    TAB(BlockWrite),

    TAB(IncrementalSearch),
    TAB(Find),
    TAB(FindReplace),
    TAB(FindRepeat),
    TAB(FindRepeatOnce),
    TAB(FindRepeatReverse),

    TAB(Message),
    TAB(GetChoice),
    TAB(GetChar),
    TAB(InsertChar),

    TAB(FileClose),
    TAB(FileCloseAll),

    TAB(WinRefresh),

    TAB(WinHSplit),
    TAB(WinNext),
    TAB(WinPrev),
    TAB(WinClose),
    TAB(WinZoom),
    TAB(WinResize),

    TAB(ExitEditor),

    TAB(ViewBuffers),
    TAB(ListRoutines),
    TAB(DirOpen),

    TAB(Compile),
    TAB(CompilePrevError),
    TAB(CompileNextError),
    TAB(ViewMessages),

    TAB(ShowKey),
    TAB(ShowEntryScreen),
    TAB(RunProgram),
    TAB(HilitWord),
    TAB(SearchWordPrev),
    TAB(SearchWordNext),
    TAB(HilitMatchBracket),
    TAB(MainMenu),
    TAB(LocalMenu),
    TAB(ShowMenu),
    TAB(ChangeMode),
    TAB(ChangeKeys),
    TAB(ChangeFlags),

    TAB(ToggleAutoIndent),
    TAB(ToggleInsert),
    TAB(ToggleExpandTabs),
    TAB(ToggleShowTabs),
    TAB(ToggleUndo),
    TAB(ToggleReadOnly),
    TAB(ToggleKeepBackups),
    TAB(ToggleMatchCase),
    TAB(ToggleBackSpKillTab),
    TAB(ToggleDeleteKillTab),
    TAB(ToggleSpaceTabs),
    TAB(ToggleIndentWithTabs),
    TAB(ToggleBackSpUnindents),
    TAB(ToggleWordWrap),
    TAB(ToggleTrim),
    TAB(ToggleShowMarkers),
    TAB(ToggleHilitTags),
    TAB(ToggleShowBookmarks),
    TAB(ToggleMakeBackups),
    TAB(SetLeftMargin),
    TAB(SetRightMargin),
    TAB(SetPrintDevice),
    TAB(ChangeTabSize),
    TAB(ChangeLeftMargin),
    TAB(ChangeRightMargin),
    TAB(ToggleSysClipboard),
    TAB(Cancel),
    TAB(Activate),
    TAB(Rescan),
    TAB(CloseActivate),
    TAB(ActivateInOtherWindow),
    TAB(DirGoUp),
    TAB(DirGoDown),
    TAB(DirGoRoot),
    TAB(DirGoto),
    TAB(DirSearchCancel),
    TAB(DirSearchNext),
    TAB(DirSearchPrev),
    TAB(DeleteFile),
    TAB(RenameFile),
    TAB(MakeDirectory),
    TAB(ShowVersion),
    TAB(ASCIITable),
    TAB(TypeChar),
    TAB(CharTrans),
    TAB(LineTrans),
    TAB(BlockTrans),
    TAB(DesktopSave),
    TAB(DesktopSaveAs),
    TAB(DesktopLoad),
    TAB(ChildClose),
    TAB(BufListFileSave),
    TAB(BufListFileClose),
    TAB(BufListSearchCancel),
    TAB(BufListSearchNext),
    TAB(BufListSearchPrev),
    TAB(ViewModeMap),
    TAB(ClearMessages),
    TAB(BlockUnTab),
    TAB(BlockEnTab),
    TAB(TagFind),
    TAB(TagFindWord),
    TAB(TagNext),
    TAB(TagPrev),
    TAB(TagPop),
    TAB(TagLoad),
    TAB(TagClear),
    TAB(TagGoto),
    TAB(BlockMarkFunction),
    TAB(IndentFunction),
    TAB(MoveFunctionPrev),
    TAB(MoveFunctionNext),
    TAB(Search),
    TAB(SearchB),
    TAB(SearchRx),
    TAB(SearchAgain),
    TAB(SearchAgainB),
    TAB(SearchReplace),
    TAB(SearchReplaceB),
    TAB(SearchReplaceRx),
    TAB(InsertDate),
    TAB(InsertUid),
    TAB(FrameNew),
    TAB(FrameClose),
    TAB(FrameNext),
    TAB(FramePrev),
    TAB(ShowHelpWord),
    TAB(ShowHelp),
    TAB(PlaceGlobalBookmark),
    TAB(RemoveGlobalBookmark),
    TAB(GotoGlobalBookmark),
    TAB(MoveBeginOrNonWhite),
    TAB(MoveBeginLinePageFile),
    TAB(MoveEndLinePageFile),
    TAB(PushGlobalBookmark),
    TAB(PopGlobalBookmark),
    TAB(SetCIndentStyle),
    TAB(SetIndentWithTabs),
    TAB(RunCompiler),
    TAB(FoldCreateAtRoutines),
    TAB(LineCenter),
    TAB(RunProgramAsync),

    TAB(ListMark),
    TAB(ListUnmark),
    TAB(ListToggleMark),
    TAB(ListMarkAll),
    TAB(ListUnmarkAll),
    TAB(ListToggleMarkAll),

    TAB(Cvs),
    TAB(RunCvs),
    TAB(ViewCvs),
    TAB(ClearCvsMessages),
    TAB(CvsDiff),
    TAB(RunCvsDiff),
    TAB(ViewCvsDiff),
    TAB(CvsCommit),
    TAB(RunCvsCommit),
    TAB(ViewCvsLog),

    TAB(Svn),
    TAB(RunSvn),
    TAB(ViewSvn),
    TAB(ClearSvnMessages),
    TAB(SvnDiff),
    TAB(RunSvnDiff),
    TAB(ViewSvnDiff),
    TAB(SvnCommit),
    TAB(RunSvnCommit),
    TAB(ViewSvnLog),

    TAB(Print),
    TAB(ExecuteCommand)

#if 0
//TAB(ShowMsg),
    TAB(BlockReadPipe),
    TAB(BlockWritePipe),
    TAB(BlockPipe),
#endif
};

#endif // CMDTAB_H
