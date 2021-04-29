/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
@interface FileArchiver : NSObject {

	archiveRef _archive;

}
+(id)archiveWithPaths:(id)arg1 destinationDir:(id)arg2 deleteSource:(BOOL)arg3 ;
+(id)matchFilesInDirectory:(id)arg1 filenamePredicate:(id)arg2 newerThan:(id)arg3 allowDirectories:(BOOL)arg4 ;
+(id)archiveWithPath:(id)arg1 ;
+(id)archiveWithPath:(id)arg1 destinationDir:(id)arg2 nameMatches:(id)arg3 maxAge:(double)arg4 allowDirectories:(BOOL)arg5 ;
-(int)closeArchive;
-(id)initWithPath:(id)arg1 shouldCompress:(BOOL)arg2 ;
-(void)moveDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addFileToArchive:(id)arg1 withFileName:(id)arg2 ;
@end

