/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKContainerAssignment.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKShare, CKRecordID, CKUserIdentity, CKRecord, CKShareParticipant, NSArray, NSString, CKDeviceToDeviceShareInvitationToken, NSData, CKRecordZone, CKContainerID;

@interface CKShareMetadata : NSObject <CKContainerAssignment, NSCopying, NSSecureCoding> {

	BOOL _acceptedInProcess;
	CKShare* _share;
	CKRecordID* _rootRecordID;
	long long _participantRole;
	long long _participantStatus;
	long long _participantPermission;
	CKUserIdentity* _ownerIdentity;
	CKRecord* _rootRecord;
	CKShareParticipant* _callingParticipant;
	NSArray* _sharedItemHierarchyIDs;
	NSString* _rootRecordType;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;
	NSData* _protectedFullToken;
	NSData* _publicToken;
	NSData* _privateToken;
	CKRecordZone* _sharedZone;
	CKContainerID* _containerID;
	NSArray* _outOfNetworkMatches;
	NSData* _encryptedData;

}

@property (nonatomic,copy) CKShareParticipant * callingParticipant;                             //@synthesize callingParticipant=_callingParticipant - In the implementation block
@property (nonatomic,copy) NSArray * sharedItemHierarchyIDs;                                    //@synthesize sharedItemHierarchyIDs=_sharedItemHierarchyIDs - In the implementation block
@property (nonatomic,retain) NSString * rootRecordType;                                         //@synthesize rootRecordType=_rootRecordType - In the implementation block
@property (nonatomic,copy) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
@property (nonatomic,copy) NSData * protectedFullToken;                                         //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,copy) NSData * publicToken;                                                //@synthesize publicToken=_publicToken - In the implementation block
@property (getter=baseToken,nonatomic,readonly) NSString * baseToken; 
@property (nonatomic,copy) NSData * privateToken;                                               //@synthesize privateToken=_privateToken - In the implementation block
@property (nonatomic,retain) CKRecordZone * sharedZone;                                         //@synthesize sharedZone=_sharedZone - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;                                         //@synthesize containerID=_containerID - In the implementation block
@property (assign,nonatomic) long long participantRole;                                         //@synthesize participantRole=_participantRole - In the implementation block
@property (assign,nonatomic) long long participantStatus;                                       //@synthesize participantStatus=_participantStatus - In the implementation block
@property (assign,nonatomic) long long participantPermission;                                   //@synthesize participantPermission=_participantPermission - In the implementation block
@property (nonatomic,retain) NSArray * outOfNetworkMatches;                                     //@synthesize outOfNetworkMatches=_outOfNetworkMatches - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                                           //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,copy) CKRecord * rootRecord;                                               //@synthesize rootRecord=_rootRecord - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                                            //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                                            //@synthesize encryptedData=_encryptedData - In the implementation block
@property (nonatomic,copy) CKUserIdentity * ownerIdentity;                                      //@synthesize ownerIdentity=_ownerIdentity - In the implementation block
@property (nonatomic,copy) CKShare * share;                                                     //@synthesize share=_share - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (nonatomic,readonly) long long participantType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)environment;
-(NSString *)containerIdentifier;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(id)ckShortDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKShare *)share;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(NSData *)encryptedData;
-(CKRecord *)rootRecord;
-(void)setRootRecord:(CKRecord *)arg1 ;
-(NSString *)baseToken;
-(NSData *)privateToken;
-(void)setShare:(CKShare *)arg1 ;
-(CKRecordID *)rootRecordID;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setEncryptedData:(NSData *)arg1 ;
-(NSData *)publicToken;
-(long long)participantRole;
-(long long)participantStatus;
-(long long)participantPermission;
-(CKUserIdentity *)ownerIdentity;
-(NSString *)rootRecordType;
-(void)setRootRecordType:(NSString *)arg1 ;
-(NSArray *)sharedItemHierarchyIDs;
-(void)setSharedItemHierarchyIDs:(NSArray *)arg1 ;
-(CKShareParticipant *)callingParticipant;
-(void)setCallingParticipant:(CKShareParticipant *)arg1 ;
-(void)setParticipantRole:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(void)setParticipantPermission:(long long)arg1 ;
-(void)setOwnerIdentity:(CKUserIdentity *)arg1 ;
-(NSData *)protectedFullToken;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(void)setPublicToken:(NSData *)arg1 ;
-(void)setPrivateToken:(NSData *)arg1 ;
-(NSArray *)outOfNetworkMatches;
-(void)setOutOfNetworkMatches:(NSArray *)arg1 ;
-(CKRecordZone *)sharedZone;
-(void)setSharedZone:(CKRecordZone *)arg1 ;
-(long long)participantType;
@end

