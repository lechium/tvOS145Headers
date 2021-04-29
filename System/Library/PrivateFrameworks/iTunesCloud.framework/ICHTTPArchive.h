/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSString, NSDateFormatter, NSDictionary;

@interface ICHTTPArchive : NSObject {

	NSMutableArray* _loggedEvents;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _flushTimer;
	NSString* _currentArchiveFileName;
	NSDateFormatter* _dateFormatter;
	NSDictionary* _creatorDictionary;
	NSString* _archiveDirectoryPath;
	NSMutableArray* _archiveFilePaths;
	BOOL _hasValidArchiveDirectory;

}
+(id)sharedArchive;
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3 ;
-(void)_onQueueFlush;
-(id)_archiveCreator;
-(id)_archiveForRequest:(id)arg1 ;
-(id)_archiveForResponse:(id)arg1 responseData:(id)arg2 ;
-(id)_arrayFromHeaderDictionary:(id)arg1 ;
-(void)_loadExistingArchivePaths;
-(void)_pruneOldArchives;
@end
