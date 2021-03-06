/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TrustedPeers/TrustedPeers-Structs.h>
@class TPPeerPermanentInfo, TPPeerStableInfo, TPPeerDynamicInfo, NSData, NSString, NSSet;

@interface TPPeer : NSObject {

	TPPeerPermanentInfo* _permanentInfo;
	TPPeerStableInfo* _stableInfo;
	TPPeerDynamicInfo* _dynamicInfo;
	NSData* _wrappedPrivateKeys;

}

@property (nonatomic,retain) TPPeerPermanentInfo * permanentInfo;              //@synthesize permanentInfo=_permanentInfo - In the implementation block
@property (nonatomic,retain) TPPeerStableInfo * stableInfo;                    //@synthesize stableInfo=_stableInfo - In the implementation block
@property (nonatomic,retain) TPPeerDynamicInfo * dynamicInfo;                  //@synthesize dynamicInfo=_dynamicInfo - In the implementation block
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,retain) NSData * wrappedPrivateKeys;                      //@synthesize wrappedPrivateKeys=_wrappedPrivateKeys - In the implementation block
@property (nonatomic,readonly) NSSet * trustedPeerIDs; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)peerID;
-(TPPeerPermanentInfo *)permanentInfo;
-(void)setPermanentInfo:(TPPeerPermanentInfo *)arg1 ;
-(TPPeerStableInfo *)stableInfo;
-(void)setStableInfo:(TPPeerStableInfo *)arg1 ;
-(id)initWithPermanentInfo:(id)arg1 ;
-(long long)updateStableInfo:(id)arg1 ;
-(long long)updateDynamicInfo:(id)arg1 ;
-(NSSet *)trustedPeerIDs;
-(TPPeerDynamicInfo *)dynamicInfo;
-(void)setDynamicInfo:(TPPeerDynamicInfo *)arg1 ;
-(NSData *)wrappedPrivateKeys;
-(void)setWrappedPrivateKeys:(NSData *)arg1 ;
@end

