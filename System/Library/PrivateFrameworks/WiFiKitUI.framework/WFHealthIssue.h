/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFHealthIssue : NSObject {

	BOOL _overrideIssue;
	BOOL _chinaDevice;
	unsigned long long _type;
	unsigned long long _category;
	NSString* _issueShortTitle;
	NSString* _issueTitle;
	NSString* _issueDescription;
	NSString* _issueRecommendation;
	NSString* _typeString;

}

@property (nonatomic,copy) NSString * issueShortTitle;                  //@synthesize issueShortTitle=_issueShortTitle - In the implementation block
@property (nonatomic,copy) NSString * issueTitle;                       //@synthesize issueTitle=_issueTitle - In the implementation block
@property (nonatomic,copy) NSString * issueDescription;                 //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,copy) NSString * issueRecommendation;              //@synthesize issueRecommendation=_issueRecommendation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long category;               //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL chinaDevice;                          //@synthesize chinaDevice=_chinaDevice - In the implementation block
@property (nonatomic,readonly) NSString * issueDetailText; 
@property (nonatomic,copy,readonly) NSString * typeString;              //@synthesize typeString=_typeString - In the implementation block
@property (assign,nonatomic) BOOL overrideIssue;                        //@synthesize overrideIssue=_overrideIssue - In the implementation block
+(id)issueWithType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSString *)typeString;
-(unsigned long long)_categoryForType:(unsigned long long)arg1 ;
-(id)_shortTitleForType:(unsigned long long)arg1 ;
-(id)_titleForType:(unsigned long long)arg1 ;
-(id)_descriptionForType:(unsigned long long)arg1 ;
-(id)_recommendationForType:(unsigned long long)arg1 ;
-(id)_typeStringForType:(unsigned long long)arg1 ;
-(BOOL)isEqualToHealthIssue:(id)arg1 ;
-(NSString *)issueDescription;
-(NSString *)issueRecommendation;
-(BOOL)overrideIssue;
-(NSString *)issueTitle;
-(NSString *)issueDetailText;
-(void)setOverrideIssue:(BOOL)arg1 ;
-(NSString *)issueShortTitle;
-(void)setIssueShortTitle:(NSString *)arg1 ;
-(void)setIssueTitle:(NSString *)arg1 ;
-(void)setIssueDescription:(NSString *)arg1 ;
-(void)setIssueRecommendation:(NSString *)arg1 ;
-(BOOL)chinaDevice;
-(void)setChinaDevice:(BOOL)arg1 ;
@end

