/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSBagProfileConfig.h>

@class NSMutableDictionary, NSString;

@interface SSMutableBagProfileConfig : SSBagProfileConfig {

	NSMutableDictionary* _mutableBagKeysDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * mutableBagKeysDictionary;              //@synthesize mutableBagKeysDictionary=_mutableBagKeysDictionary - In the implementation block
@property (assign,nonatomic) double bagLoadTimeout; 
@property (nonatomic,copy) NSString * profile; 
@property (nonatomic,copy) NSString * profileVersion; 
-(id)init;
-(id)bagKeysDictionary;
-(NSMutableDictionary *)mutableBagKeysDictionary;
-(void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)registerBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)setMutableBagKeysDictionary:(NSMutableDictionary *)arg1 ;
@end

