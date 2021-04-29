/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXCMMInvitationParticipant.h>

@class NSString;

@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant> {

	NSString* emailAddressString;
	NSString* phoneNumberString;
	NSString* _localizedName;
	NSString* _firstName;

}

@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddressString; 
@property (nonatomic,readonly) NSString * phoneNumberString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedName;
-(NSString *)firstName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
@end
