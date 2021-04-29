/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class NSString, NSDate, UILabel, NSArray;

@interface TVCSWiFiCertificateSummaryCell : UITableViewCell {

	BOOL _trusted;
	NSString* _titleText;
	NSString* _issuer;
	NSDate* _expirationDate;
	UILabel* _titleLabel;
	UILabel* _issuerLabel;
	UILabel* _trustLabel;
	UILabel* _isTrustedLabel;
	UILabel* _expiresByLabel;
	UILabel* _expiryDateLabel;
	NSArray* _constraints;

}

@property (nonatomic,readonly) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * issuerLabel;                    //@synthesize issuerLabel=_issuerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * trustLabel;                     //@synthesize trustLabel=_trustLabel - In the implementation block
@property (nonatomic,readonly) UILabel * isTrustedLabel;                 //@synthesize isTrustedLabel=_isTrustedLabel - In the implementation block
@property (nonatomic,readonly) UILabel * expiresByLabel;                 //@synthesize expiresByLabel=_expiresByLabel - In the implementation block
@property (nonatomic,readonly) UILabel * expiryDateLabel;                //@synthesize expiryDateLabel=_expiryDateLabel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSString * titleText;                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * issuer;                            //@synthesize issuer=_issuer - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isTrusted,nonatomic) BOOL trusted;              //@synthesize trusted=_trusted - In the implementation block
+(id)dateFormatter;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isTrusted;
-(NSString *)issuer;
-(NSArray *)constraints;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(BOOL)canBecomeFocused;
-(id)_titleFont;
-(void)setTrusted:(BOOL)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(id)_subtitleFont;
-(id)_newTitleLabel;
-(id)_newSubtitleLabel;
-(UILabel *)issuerLabel;
-(UILabel *)expiresByLabel;
-(UILabel *)expiryDateLabel;
-(void)_updateCellBackground;
-(UILabel *)trustLabel;
-(UILabel *)isTrustedLabel;
@end

