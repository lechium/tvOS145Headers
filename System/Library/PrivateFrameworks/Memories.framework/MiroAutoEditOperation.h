/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Foundation/NSOperation.h>

@class MiroAutoEditor, MiroMemory, MiroCloudDownloader, MiroAutoEditController;

@interface MiroAutoEditOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _shouldSave;
	int _requestID;
	MiroAutoEditor* _autoEditorParent;
	MiroMemory* _memory;
	/*^block*/id _cleanupHandler;
	MiroCloudDownloader* _cloudDownloader;
	MiroAutoEditController* _autoEditController;
	CGSize _naturalSize;

}

@property (nonatomic,retain) MiroCloudDownloader * cloudDownloader;              //@synthesize cloudDownloader=_cloudDownloader - In the implementation block
@property (retain) MiroAutoEditController * autoEditController;                  //@synthesize autoEditController=_autoEditController - In the implementation block
@property (assign,nonatomic) int requestID;                                      //@synthesize requestID=_requestID - In the implementation block
@property (retain) MiroAutoEditor * autoEditorParent;                            //@synthesize autoEditorParent=_autoEditorParent - In the implementation block
@property (retain) MiroMemory * memory;                                          //@synthesize memory=_memory - In the implementation block
@property (copy) id cleanupHandler;                                              //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (assign) BOOL shouldSave;                                              //@synthesize shouldSave=_shouldSave - In the implementation block
@property (assign,nonatomic) CGSize naturalSize;                                 //@synthesize naturalSize=_naturalSize - In the implementation block
-(void)start;
-(void)finished;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)cleanupHandler;
-(MiroMemory *)memory;
-(void)setCleanupHandler:(id)arg1 ;
-(int)requestID;
-(void)setRequestID:(int)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(CGSize)naturalSize;
-(void)setShouldSave:(BOOL)arg1 ;
-(BOOL)shouldSave;
-(void)setNaturalSize:(CGSize)arg1 ;
-(MiroAutoEditController *)autoEditController;
-(void)setAutoEditController:(MiroAutoEditController *)arg1 ;
-(MiroAutoEditor *)autoEditorParent;
-(MiroCloudDownloader *)cloudDownloader;
-(id)initWithNaturalSize:(CGSize)arg1 ;
-(BOOL)shouldDownload;
-(BOOL)shouldCancelOnNonLocalAssets;
-(void)performAutoEditAsynchronouslyWithNaturalSize:(CGSize)arg1 ;
-(void)setAutoEditorParent:(MiroAutoEditor *)arg1 ;
-(void)setCloudDownloader:(MiroCloudDownloader *)arg1 ;
@end
