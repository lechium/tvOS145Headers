/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface RPFileTransferSmallFilesTask : NSObject {

	BOOL _needsRetry;
	NSMutableArray* _fileItems;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskID;

}

@property (nonatomic,retain) NSMutableArray * fileItems;                      //@synthesize fileItems=_fileItems - In the implementation block
@property (assign,nonatomic) BOOL needsRetry;                                 //@synthesize needsRetry=_needsRetry - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long taskID;                       //@synthesize taskID=_taskID - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)fileItems;
-(void)setFileItems:(NSMutableArray *)arg1 ;
-(unsigned long long)taskID;
-(BOOL)needsRetry;
-(void)setNeedsRetry:(BOOL)arg1 ;
-(void)setTaskID:(unsigned long long)arg1 ;
@end

