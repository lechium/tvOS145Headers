/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRIPaths;
@class NSString;

@interface TRITreatmentInfo : NSObject {

	id<TRIPaths> _paths;
	int _deploymentId;
	NSString* _namespaceName;
	NSString* _treatmentId;
	NSString* _experimentId;

}

@property (nonatomic,retain) NSString * namespaceName;              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,retain) NSString * treatmentId;                //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,retain) NSString * experimentId;               //@synthesize experimentId=_experimentId - In the implementation block
@property (assign,nonatomic) int deploymentId;                      //@synthesize deploymentId=_deploymentId - In the implementation block
+(id)loadInfoForTreatment:(id)arg1 namespaceName:(id)arg2 paths:(id)arg3 ;
-(BOOL)load;
-(id)url;
-(id)infoDictionary;
-(BOOL)save;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(NSString *)namespaceName;
-(id)initWithPaths:(id)arg1 ;
-(void)setNamespaceName:(NSString *)arg1 ;
-(void)setDeploymentId:(int)arg1 ;
-(int)deploymentId;
-(id)baseUrlForTreatmentsWithNamespaceName:(id)arg1 ;
-(id)_treatmentBasePath;
-(id)baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2 ;
-(id)treatmentDirectory;
-(id)urlWithDir:(id)arg1 ;
-(BOOL)loadFromUrl:(id)arg1 ;
-(BOOL)saveToUrl:(id)arg1 ;
-(BOOL)saveToDir:(id)arg1 ;
@end

