/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SHSignature;


@protocol SHSessionDriver <SHMatcherDelegate>
@property (assign,nonatomic,__weak) id<SHSessionDriverDelegate> sessionDelegate; 
@property (nonatomic,readonly) SHSignature * matchingSignature; 
@required
-(void)setSessionDelegate:(id)arg1;
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(SHSignature *)matchingSignature;
-(void)flow:(id)arg1 time:(id)arg2;

@end

