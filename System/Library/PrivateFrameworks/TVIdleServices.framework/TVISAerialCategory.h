/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface TVISAerialCategory : NSObject <NSSecureCoding> {

	BOOL _isActive;
	NSString* _identifier;
	NSString* _localizedName;
	NSString* _localizedDescription;
	long long _preferredOrder;
	NSArray* _assets;
	NSURL* _previewImageURL;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) long long preferredOrder;                     //@synthesize preferredOrder=_preferredOrder - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                             //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSURL * previewImageURL;                      //@synthesize previewImageURL=_previewImageURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localPreviewImageURLForCategoryID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)localizedName;
-(BOOL)isActive;
-(NSArray *)assets;
-(long long)preferredOrder;
-(NSURL *)previewImageURL;
-(id)initWithEntity:(id)arg1 downloadedFileURLs:(id)arg2 localizationBundle:(id)arg3 ;
@end

