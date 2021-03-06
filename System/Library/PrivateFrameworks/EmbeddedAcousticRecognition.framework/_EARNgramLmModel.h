/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <EmbeddedAcousticRecognition/_EARLmModel.h>

@class NSString;

@interface _EARNgramLmModel : _EARLmModel {

	shared_ptr<quasar::NgramLmModel2>* _ngramModel;
	shared_ptr<quasar::NgramSrilmConfig>* _ngramBuildConfig;

}

@property (nonatomic,readonly) shared_ptr<quasar::NgramLmModel2>* ngramModel;                       //@synthesize ngramModel=_ngramModel - In the implementation block
@property (nonatomic,readonly) shared_ptr<quasar::NgramSrilmConfig>* ngramBuildConfig;              //@synthesize ngramBuildConfig=_ngramBuildConfig - In the implementation block
@property (nonatomic,readonly) NSString * arpaFileName; 
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 root:(id)arg2 ;
-(id)initFromDirectory:(id)arg1 ;
-(BOOL)writeToDirectory:(id)arg1 ;
-(id)_initWithModel:(shared_ptr<quasar::NgramLmModel2>*)arg1 config:(shared_ptr<quasar::NgramSrilmConfig>*)arg2 ;
-(id)generateNgramCounts:(id)arg1 ;
-(NSString *)arpaFileName;
-(shared_ptr<quasar::NgramLmModel2>*)ngramModel;
-(shared_ptr<quasar::NgramSrilmConfig>*)ngramBuildConfig;
@end

