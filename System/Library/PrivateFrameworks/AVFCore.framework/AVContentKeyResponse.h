/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject {

	AVContentKeyResponseInternal* _keyResponse;

}
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 ;
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2 ;
+(id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2 ;
+(id)contentKeyResponseWithAuthorizationTokenData:(id)arg1 ;
-(void)dealloc;
-(id)keySystem;
-(id)initWithKeySystem:(id)arg1 ;
@end

