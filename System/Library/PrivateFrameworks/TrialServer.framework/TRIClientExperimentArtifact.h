/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate, NSArray, TRIExperimentDeployment, TRIClientExperiment;

@interface TRIClientExperimentArtifact : NSObject <NSSecureCoding> {

	BOOL _internalBuildOnly;
	int _deploymentId;
	int _cloudKitContainer;
	int _deploymentEnvironment;
	int _experimentState;
	int _experimentType;
	int _experimentPriority;
	NSString* _experimentId;
	NSString* _teamId;
	NSData* _encodedExperimentDefinition;
	NSString* _encodedExperimentDefinitionSignature;
	NSData* _publicCertificate;
	NSDate* _modifiedDate;
	NSArray* _namespaces;
	NSArray* _namespaceCompatibilityVersions;

}

@property (readonly) TRIExperimentDeployment * experimentDeployment; 
@property (readonly) BOOL hasDeploymentId; 
@property (nonatomic,retain) NSString * experimentId;                                      //@synthesize experimentId=_experimentId - In the implementation block
@property (assign,nonatomic) int deploymentId;                                             //@synthesize deploymentId=_deploymentId - In the implementation block
@property (assign,nonatomic) int cloudKitContainer;                                        //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (assign,nonatomic) int deploymentEnvironment;                                    //@synthesize deploymentEnvironment=_deploymentEnvironment - In the implementation block
@property (nonatomic,retain) NSString * teamId;                                            //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,retain) NSData * encodedExperimentDefinition;                         //@synthesize encodedExperimentDefinition=_encodedExperimentDefinition - In the implementation block
@property (nonatomic,retain) NSString * encodedExperimentDefinitionSignature;              //@synthesize encodedExperimentDefinitionSignature=_encodedExperimentDefinitionSignature - In the implementation block
@property (nonatomic,retain) NSData * publicCertificate;                                   //@synthesize publicCertificate=_publicCertificate - In the implementation block
@property (nonatomic,readonly) TRIClientExperiment * experiment; 
@property (assign,nonatomic) int experimentState;                                          //@synthesize experimentState=_experimentState - In the implementation block
@property (assign,nonatomic) int experimentType;                                           //@synthesize experimentType=_experimentType - In the implementation block
@property (assign,nonatomic) int experimentPriority;                                       //@synthesize experimentPriority=_experimentPriority - In the implementation block
@property (assign,nonatomic) BOOL internalBuildOnly;                                       //@synthesize internalBuildOnly=_internalBuildOnly - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                        //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,retain) NSArray * namespaces;                                         //@synthesize namespaces=_namespaces - In the implementation block
@property (nonatomic,retain) NSArray * namespaceCompatibilityVersions;                     //@synthesize namespaceCompatibilityVersions=_namespaceCompatibilityVersions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg1 error:(id*)arg2 ;
+(id)artifactWithExperiment:(id)arg1 ;
+(id)_convertNamespaceIdsToNames:(id)arg1 ;
+(id)artifactFromCKRecordResult:(id)arg1 withNamespaceDescriptorProvider:(id)arg2 container:(int)arg3 teamId:(id)arg4 paths:(id)arg5 requireDeploymentId:(BOOL)arg6 ;
-(id)init;
-(id)data;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(int)cloudKitContainer;
-(void)setCloudKitContainer:(int)arg1 ;
-(TRIClientExperiment *)experiment;
-(NSDate *)modifiedDate;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(NSArray *)namespaces;
-(void)setTeamId:(NSString *)arg1 ;
-(NSString *)teamId;
-(void)setNamespaces:(NSArray *)arg1 ;
-(void)setDeploymentId:(int)arg1 ;
-(int)deploymentId;
-(BOOL)hasDeploymentId;
-(TRIExperimentDeployment *)experimentDeployment;
-(int)deploymentEnvironment;
-(NSData *)publicCertificate;
-(id)initWithExperiment:(id)arg1 ;
-(BOOL)hasNamespacesAvailableForExperimentWithDatabase:(id)arg1 ;
-(int)experimentType;
-(NSArray *)namespaceCompatibilityVersions;
-(NSData *)encodedExperimentDefinition;
-(NSString *)encodedExperimentDefinitionSignature;
-(void)setEncodedExperimentDefinition:(NSData *)arg1 ;
-(void)setEncodedExperimentDefinitionSignature:(NSString *)arg1 ;
-(void)setPublicCertificate:(NSData *)arg1 ;
-(int)experimentState;
-(int)experimentPriority;
-(BOOL)internalBuildOnly;
-(void)setInternalBuildOnly:(BOOL)arg1 ;
-(void)setDeploymentEnvironment:(int)arg1 ;
-(id)asPersistedArtifact;
-(void)setExperimentState:(int)arg1 ;
-(void)setExperimentType:(int)arg1 ;
-(void)setExperimentPriority:(int)arg1 ;
-(void)setNamespaceCompatibilityVersions:(NSArray *)arg1 ;
-(BOOL)isCompatibleWithNamespaceDescriptorProvider:(id)arg1 ;
-(BOOL)saveWithDatabase:(id)arg1 paths:(id)arg2 ;
@end

