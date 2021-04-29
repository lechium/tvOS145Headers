/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PVPersonProtocol.h>

@protocol PVPhotoLibraryProtocol, PVPersonProtocol, PVFaceGroupProtocol;
@class NSString, NSMutableSet, NSSet, NSMutableDictionary, NSDate;

@interface PVPersonCluster : NSObject <PVPersonProtocol> {

	unsigned long long _hash;
	BOOL _highlyInteresting;
	BOOL _quarantined;
	id<PVPhotoLibraryProtocol> _photoLibrary;
	id<PVPersonProtocol> _sourcePerson;
	id<PVFaceGroupProtocol> _sourceFaceGroup;
	NSMutableSet* _mergedPersonIdentifiers;
	NSMutableSet* _backingFaceIdentifiers;
	NSMutableSet* _backingAssetIdentifiers;
	NSSet* _sourcePersonBackingAssetIdentifiers;
	NSMutableSet* _backingMomentIdentifiers;
	double _interestingScore;
	NSMutableDictionary* _backingFaceIdentifiersByMomentIdentifiers;
	NSMutableDictionary* _representativeFaceByFaceIdentifiers;
	NSDate* _lastSeenDate;
	NSDate* _firstSeenDate;

}

@property (assign,nonatomic,__weak) id<PVPhotoLibraryProtocol> photoLibrary;                               //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSDate * lastSeenDate;                                                        //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (nonatomic,retain) NSDate * firstSeenDate;                                                       //@synthesize firstSeenDate=_firstSeenDate - In the implementation block
@property (nonatomic,retain) id<PVPersonProtocol> sourcePerson;                                            //@synthesize sourcePerson=_sourcePerson - In the implementation block
@property (nonatomic,retain) id<PVFaceGroupProtocol> sourceFaceGroup;                                      //@synthesize sourceFaceGroup=_sourceFaceGroup - In the implementation block
@property (nonatomic,retain) NSSet * sourcePersonBackingAssetIdentifiers;                                  //@synthesize sourcePersonBackingAssetIdentifiers=_sourcePersonBackingAssetIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * mergedPersonIdentifiers;                                       //@synthesize mergedPersonIdentifiers=_mergedPersonIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * backingFaceIdentifiers;                                        //@synthesize backingFaceIdentifiers=_backingFaceIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * backingAssetIdentifiers;                                       //@synthesize backingAssetIdentifiers=_backingAssetIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * backingMomentIdentifiers;                                      //@synthesize backingMomentIdentifiers=_backingMomentIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingFaceIdentifiersByMomentIdentifiers;              //@synthesize backingFaceIdentifiersByMomentIdentifiers=_backingFaceIdentifiersByMomentIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * representativeFaceByFaceIdentifiers;                    //@synthesize representativeFaceByFaceIdentifiers=_representativeFaceByFaceIdentifiers - In the implementation block
@property (assign,nonatomic) double interestingScore;                                                      //@synthesize interestingScore=_interestingScore - In the implementation block
@property (assign,nonatomic) BOOL highlyInteresting;                                                       //@synthesize highlyInteresting=_highlyInteresting - In the implementation block
@property (assign,nonatomic) BOOL quarantined;                                                             //@synthesize quarantined=_quarantined - In the implementation block
@property (nonatomic,readonly) double libraryTimespan; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) unsigned long long faceCount; 
@property (nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * anonymizedName; 
@property (nonatomic,readonly) long long verifiedType; 
@property (assign,nonatomic) BOOL isVerified; 
@property (assign,nonatomic) long long manualOrder; 
@property (nonatomic,retain) id<PVFaceProtocol> keyFace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)faceCount;
-(BOOL)hidden;
-(void)setIsVerified:(BOOL)arg1 ;
-(BOOL)isVerified;
-(NSDate *)lastSeenDate;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(NSString *)localIdentifier;
-(BOOL)favorite;
-(void)setKeyFace:(id<PVFaceProtocol>)arg1 ;
-(id<PVFaceProtocol>)keyFace;
-(BOOL)quarantined;
-(void)setQuarantined:(BOOL)arg1 ;
-(long long)verifiedType;
-(id<PVPhotoLibraryProtocol>)photoLibrary;
-(void)setManualOrder:(long long)arg1 ;
-(void)setPhotoLibrary:(id<PVPhotoLibraryProtocol>)arg1 ;
-(long long)manualOrder;
-(id<PVPersonProtocol>)sourcePerson;
-(void)setSourcePerson:(id<PVPersonProtocol>)arg1 ;
-(void)invalidateCaches;
-(NSString *)anonymizedName;
-(void)pv_addMergeCandidatePersons:(id)arg1 ;
-(id)personLocalIdentifiers;
-(id)fetchAssets;
-(id)initWithPerson:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)initWithFaceGroup:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)fetchFaces;
-(NSMutableSet *)backingFaceIdentifiers;
-(NSMutableSet *)backingAssetIdentifiers;
-(id)fetchMoments;
-(NSMutableSet *)backingMomentIdentifiers;
-(double)libraryTimespan;
-(NSDate *)firstSeenDate;
-(void)_cacheDates;
-(id<PVFaceGroupProtocol>)sourceFaceGroup;
-(void)setSourceFaceGroup:(id<PVFaceGroupProtocol>)arg1 ;
-(NSMutableSet *)mergedPersonIdentifiers;
-(void)setMergedPersonIdentifiers:(NSMutableSet *)arg1 ;
-(void)setBackingFaceIdentifiers:(NSMutableSet *)arg1 ;
-(void)setBackingAssetIdentifiers:(NSMutableSet *)arg1 ;
-(NSSet *)sourcePersonBackingAssetIdentifiers;
-(void)setSourcePersonBackingAssetIdentifiers:(NSSet *)arg1 ;
-(void)setBackingMomentIdentifiers:(NSMutableSet *)arg1 ;
-(double)interestingScore;
-(void)setInterestingScore:(double)arg1 ;
-(NSMutableDictionary *)backingFaceIdentifiersByMomentIdentifiers;
-(void)setBackingFaceIdentifiersByMomentIdentifiers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)representativeFaceByFaceIdentifiers;
-(void)setRepresentativeFaceByFaceIdentifiers:(NSMutableDictionary *)arg1 ;
-(BOOL)highlyInteresting;
-(void)setHighlyInteresting:(BOOL)arg1 ;
-(void)setFirstSeenDate:(NSDate *)arg1 ;
@end

