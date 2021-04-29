/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NSLocaleRegion : NSObject {

	NSString* _twoCharacterCode;
	NSString* _threeCharacterCode;

}

@property (copy) NSString * twoCharacterCode;                //@synthesize twoCharacterCode=_twoCharacterCode - In the implementation block
@property (copy) NSString * threeCharacterCode;              //@synthesize threeCharacterCode=_threeCharacterCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(void)setTwoCharacterCode:(NSString *)arg1 ;
-(void)setThreeCharacterCode:(NSString *)arg1 ;
-(NSString *)twoCharacterCode;
-(NSString *)threeCharacterCode;
-(id)initWithRegionIdentifier:(id)arg1 ;
@end

