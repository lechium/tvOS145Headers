/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriVideoIntents/SiriVideoIntents-Structs.h>
@interface ArchiveExtractor : NSObject
-(archiveRef)createWriteDiskArchive;
-(BOOL)copyDataFromReadArchive:(archiveRef)arg1 toWriteDiskArchive:(archiveRef)arg2 ;
-(archiveRef)createReadArchive;
-(BOOL)performExtractionForArchive:(archiveRef)arg1 toDestinationDirectory:(id)arg2 ;
-(BOOL)unarchiveData:(id)arg1 toDestinationDirectory:(id)arg2 ;
-(BOOL)extractArchiveAtURL:(id)arg1 toDestinationDirectoryURL:(id)arg2 ;
@end

