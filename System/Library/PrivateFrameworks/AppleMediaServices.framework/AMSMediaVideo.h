/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL;

@interface AMSMediaVideo : NSObject {

	NSDictionary* _videoDictionary;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSDictionary * videoDictionary;              //@synthesize videoDictionary=_videoDictionary - In the implementation block
-(id)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)URL;
-(NSDictionary *)videoDictionary;
@end

