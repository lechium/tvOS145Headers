/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVIdleServices/TVISScreenSaver.h>

@class NSArray, NSURL, NSString;

@interface TVISAerialScreenSaver : NSObject <TVISScreenSaver> {

	long long _type;
	NSArray* _assets;
	NSArray* _categories;
	NSURL* _localizedStringsBundleURL;

}

@property (nonatomic,readonly) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                           //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSURL * localizedStringsBundleURL;              //@synthesize localizedStringsBundleURL=_localizedStringsBundleURL - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(NSArray *)categories;
-(NSArray *)assets;
-(NSURL *)localizedStringsBundleURL;
-(id)initWithAssets:(id)arg1 categories:(id)arg2 localizedStringsBundleURL:(id)arg3 ;
@end

