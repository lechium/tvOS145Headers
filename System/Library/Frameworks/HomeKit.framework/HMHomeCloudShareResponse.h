/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKShareParticipant, HMUser, HMUserCloudShareClientInfo;

@interface HMHomeCloudShareResponse : NSObject {

	CKShareParticipant* _participant;
	HMUser* _ownerUser;
	HMUserCloudShareClientInfo* _clientInfo;

}

@property (readonly) CKShareParticipant * participant;                     //@synthesize participant=_participant - In the implementation block
@property (readonly) HMUser * ownerUser;                                   //@synthesize ownerUser=_ownerUser - In the implementation block
@property (readonly) HMUserCloudShareClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
-(HMUserCloudShareClientInfo *)clientInfo;
-(CKShareParticipant *)participant;
-(HMUser *)ownerUser;
-(id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3 ;
@end
