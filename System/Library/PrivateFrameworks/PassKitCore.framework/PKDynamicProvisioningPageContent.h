/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKDynamicProvisioningPageLearnMoreContent;

@interface PKDynamicProvisioningPageContent : NSObject <NSCopying> {

	unsigned char _contentAlignment;
	unsigned long long _pageNumber;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _primaryActionTitle;
	NSString* _primaryActionIdentifier;
	NSString* _secondaryActionTitle;
	NSString* _secondaryActionIdentifier;
	NSString* _disclosureTitle;
	NSString* _heroImageURL;
	PKDynamicProvisioningPageLearnMoreContent* _learnMore;

}

@property (assign,nonatomic) unsigned long long pageNumber;                                      //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * body;                                                      //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * primaryActionTitle;                                        //@synthesize primaryActionTitle=_primaryActionTitle - In the implementation block
@property (nonatomic,copy) NSString * primaryActionIdentifier;                                   //@synthesize primaryActionIdentifier=_primaryActionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * secondaryActionTitle;                                      //@synthesize secondaryActionTitle=_secondaryActionTitle - In the implementation block
@property (nonatomic,copy) NSString * secondaryActionIdentifier;                                 //@synthesize secondaryActionIdentifier=_secondaryActionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * disclosureTitle;                                           //@synthesize disclosureTitle=_disclosureTitle - In the implementation block
@property (nonatomic,retain) NSString * heroImageURL;                                            //@synthesize heroImageURL=_heroImageURL - In the implementation block
@property (nonatomic,retain) PKDynamicProvisioningPageLearnMoreContent * learnMore;              //@synthesize learnMore=_learnMore - In the implementation block
@property (assign,nonatomic) unsigned char contentAlignment;                                     //@synthesize contentAlignment=_contentAlignment - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)body;
-(unsigned long long)pageNumber;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(id)initWithDictonary:(id)arg1 ;
-(BOOL)isEmptyPage;
-(NSString *)primaryActionTitle;
-(void)setPrimaryActionTitle:(NSString *)arg1 ;
-(NSString *)primaryActionIdentifier;
-(void)setPrimaryActionIdentifier:(NSString *)arg1 ;
-(NSString *)secondaryActionTitle;
-(void)setSecondaryActionTitle:(NSString *)arg1 ;
-(NSString *)secondaryActionIdentifier;
-(void)setSecondaryActionIdentifier:(NSString *)arg1 ;
-(NSString *)disclosureTitle;
-(void)setDisclosureTitle:(NSString *)arg1 ;
-(NSString *)heroImageURL;
-(void)setHeroImageURL:(NSString *)arg1 ;
-(PKDynamicProvisioningPageLearnMoreContent *)learnMore;
-(void)setLearnMore:(PKDynamicProvisioningPageLearnMoreContent *)arg1 ;
-(unsigned char)contentAlignment;
-(void)setContentAlignment:(unsigned char)arg1 ;
@end

