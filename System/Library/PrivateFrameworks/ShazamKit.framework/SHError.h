/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SHError : NSObject
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3 ;
+(id)messageForCode:(long long)arg1 ;
+(BOOL)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 ;
+(BOOL)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 keyOverrides:(id)arg4 ;
@end

