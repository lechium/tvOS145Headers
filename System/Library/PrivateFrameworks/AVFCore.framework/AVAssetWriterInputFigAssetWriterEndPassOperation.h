/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>

@class AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	AVAssetWriterInputPassDescription* _nextPassDescription;

}

@property (nonatomic,readonly) AVAssetWriterInputPassDescription * descriptionForNextPass;              //@synthesize nextPassDescription=_nextPassDescription - In the implementation block
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 trackID:(int)arg2 ;
-(AVAssetWriterInputPassDescription *)descriptionForNextPass;
-(void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3 ;
@end

