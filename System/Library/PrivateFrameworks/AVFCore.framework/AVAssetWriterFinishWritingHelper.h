/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {

	NSArray* _finishWritingOperations;
	NSOperation* _transitionToTerminalStatusOperation;

}

@property (nonatomic,readonly) NSOperation * transitionToTerminalStatusOperation;              //@synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation - In the implementation block
-(void)dealloc;
-(long long)status;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2 ;
-(NSOperation *)transitionToTerminalStatusOperation;
-(void)_finishWritingOperationsDidFinish;
@end

