/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWNodeMessage.h>

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage {

	BWNodeError* _nodeError;

}

@property (readonly) BWNodeError * nodeError; 
+(id)newMessageWithNodeError:(id)arg1 ;
-(void)dealloc;
-(BWNodeError *)nodeError;
-(id)_initWithNodeError:(id)arg1 ;
@end

