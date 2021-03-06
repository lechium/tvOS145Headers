/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, MLModel;

@interface PPTopicMapping : NSObject {

	NSString* _mappingId;
	MLModel* _topicModel;
	MLModel* _locationModel;
	MLModel* _entityModel;
	MLModel* _unmappingModel;
	MLModel* _activationModel;
	MLModel* _unmappingActivationModel;

}
+(id)_renamePreviousRecord:(id)arg1 ;
+(BOOL)_modelExists:(id)arg1 ;
+(id)_fetchNumberedListOfModels:(id)arg1 ;
-(id)_qidForInteger:(long long)arg1 ;
-(long long)_integerForQID:(id)arg1 ;
-(id)initWithMappingId:(id)arg1 ;
-(id)initWithModels:(id)arg1 entityModel:(id)arg2 locationModel:(id)arg3 unmappingModel:(id)arg4 activationModel:(id)arg5 unmappingActivationModel:(id)arg6 mappingId:(id)arg7 ;
-(id)_forwardMappingPass:(id)arg1 features:(id)arg2 record:(id)arg3 previousRecord:(id)arg4 stop:(BOOL*)arg5 error:(id*)arg6 ;
-(id)mappedTopics:(id*)arg1 ;
-(id)unmappedTopics:(id)arg1 ;
@end

