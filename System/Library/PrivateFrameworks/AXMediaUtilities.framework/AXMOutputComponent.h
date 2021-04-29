/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AXMOutputComponent : NSObject {

	long long _componentState;

}

@property (assign,nonatomic) long long componentState;              //@synthesize componentState=_componentState - In the implementation block
+(BOOL)isSupported;
-(id)description;
-(id)init;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setComponentState:(long long)arg1 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)componentState;
@end

