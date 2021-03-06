/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAppletSubcredential, PKPassAutomaticSelectionCriterion, NSArray;

@interface PKPlaceholderPassConfiguration : NSObject <NSSecureCoding> {

	PKAppletSubcredential* _subcredential;
	PKPassAutomaticSelectionCriterion* _automaticSelectionCriterion;
	long long _paymentApplicationState;
	NSArray* _associatedApplicationIdentifiers;
	NSArray* _passFields;

}

@property (nonatomic,readonly) PKAppletSubcredential * subcredential;                                        //@synthesize subcredential=_subcredential - In the implementation block
@property (nonatomic,readonly) PKPassAutomaticSelectionCriterion * automaticSelectionCriterion;              //@synthesize automaticSelectionCriterion=_automaticSelectionCriterion - In the implementation block
@property (nonatomic,readonly) long long paymentApplicationState;                                            //@synthesize paymentApplicationState=_paymentApplicationState - In the implementation block
@property (nonatomic,copy) NSArray * associatedApplicationIdentifiers;                                       //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * passFields;                                                             //@synthesize passFields=_passFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)associatedApplicationIdentifiers;
-(void)setAssociatedApplicationIdentifiers:(NSArray *)arg1 ;
-(PKAppletSubcredential *)subcredential;
-(PKPassAutomaticSelectionCriterion *)automaticSelectionCriterion;
-(long long)paymentApplicationState;
-(NSArray *)passFields;
-(id)initWithSubcredential:(id)arg1 automaticSelectionCriterion:(id)arg2 ;
-(void)setPassFields:(NSArray *)arg1 ;
@end

