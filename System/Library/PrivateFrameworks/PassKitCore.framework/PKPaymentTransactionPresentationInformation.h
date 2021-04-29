/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject {

	BOOL _destructiveSecondaryString;
	BOOL _shouldGrayValue;
	BOOL _shouldStrikeValue;
	BOOL _shouldShowDisclosure;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	NSString* _rewardsString;
	NSString* _valueString;

}

@property (nonatomic,retain) NSString * primaryString;                     //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                   //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                    //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (assign,nonatomic) BOOL destructiveSecondaryString;              //@synthesize destructiveSecondaryString=_destructiveSecondaryString - In the implementation block
@property (nonatomic,retain) NSString * rewardsString;                     //@synthesize rewardsString=_rewardsString - In the implementation block
@property (nonatomic,retain) NSString * valueString;                       //@synthesize valueString=_valueString - In the implementation block
@property (assign,nonatomic) BOOL shouldGrayValue;                         //@synthesize shouldGrayValue=_shouldGrayValue - In the implementation block
@property (assign,nonatomic) BOOL shouldStrikeValue;                       //@synthesize shouldStrikeValue=_shouldStrikeValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDisclosure;                    //@synthesize shouldShowDisclosure=_shouldShowDisclosure - In the implementation block
-(NSString *)primaryString;
-(NSString *)valueString;
-(void)setValueString:(NSString *)arg1 ;
-(BOOL)shouldShowDisclosure;
-(void)setPrimaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)tertiaryString;
-(void)setTertiaryString:(NSString *)arg1 ;
-(BOOL)destructiveSecondaryString;
-(void)setDestructiveSecondaryString:(BOOL)arg1 ;
-(NSString *)rewardsString;
-(void)setRewardsString:(NSString *)arg1 ;
-(BOOL)shouldGrayValue;
-(void)setShouldGrayValue:(BOOL)arg1 ;
-(BOOL)shouldStrikeValue;
-(void)setShouldStrikeValue:(BOOL)arg1 ;
-(void)setShouldShowDisclosure:(BOOL)arg1 ;
@end
