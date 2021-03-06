/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, UISceneOpenURLOptions, NSDictionary;

@interface UIOpenURLContext : NSObject {

	NSURL* _URL;
	UISceneOpenURLOptions* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * optionsDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * URLOptionsDictionary; 
@property (nonatomic,copy,readonly) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) UISceneOpenURLOptions * options;                       //@synthesize options=_options - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)URL;
-(UISceneOpenURLOptions *)options;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)optionsDictionary;
-(NSDictionary *)URLOptionsDictionary;
@end

