/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerConfiguration.h>

@protocol PKPeerPaymentAssociatedAccountSetupDelegate;
@class NSString, PKFamilyMember, PKPeerPaymentPreferences;

@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration> {

	NSString* _firstName;
	NSString* _lastName;
	PKFamilyMember* _familyMember;
	PKPeerPaymentPreferences* _updatedPreferences;
	long long _setupType;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _associatedAccountSetupDelegate;

}

@property (nonatomic,copy) NSString * firstName;                                                                            //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                                                             //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) PKFamilyMember * familyMember;                                                               //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) PKPeerPaymentPreferences * updatedPreferences;                                                 //@synthesize updatedPreferences=_updatedPreferences - In the implementation block
@property (nonatomic,readonly) long long setupType;                                                                         //@synthesize setupType=_setupType - In the implementation block
@property (nonatomic,readonly) id<PKPeerPaymentAssociatedAccountSetupDelegate> associatedAccountSetupDelegate;              //@synthesize associatedAccountSetupDelegate=_associatedAccountSetupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(long long)setupType;
-(PKFamilyMember *)familyMember;
-(unsigned long long)peerPaymentSetupConfigurationType;
-(PKPeerPaymentPreferences *)updatedPreferences;
-(id)initWithFamilyMember:(id)arg1 associatedAccountSetupDelegate:(id)arg2 setupType:(long long)arg3 ;
-(void)setUpdatedPreferences:(PKPeerPaymentPreferences *)arg1 ;
-(id<PKPeerPaymentAssociatedAccountSetupDelegate>)associatedAccountSetupDelegate;
@end

