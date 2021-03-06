/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLTreeEnsembleXGBoostClassifier.h>
#import <libobjc.A.dylib/MLUpdatable.h>

@protocol OS_dispatch_queue;
@class MLUpdateProgressHandlers, NSObject, MLParameterContainer, NSString;

@interface MLTreeEnsembleXGBoostUpdateEngine : MLTreeEnsembleXGBoostClassifier <MLUpdatable> {

	BOOL _continueWithUpdate;
	BOOL _personalization;
	MLUpdateProgressHandlers* _progressHandlers;
	NSObject*<OS_dispatch_queue> _progressHandlersDispatchQueue;
	MLParameterContainer* _parameterContainer;
	unsigned long long _numDimensions;
	shared_ptr<Archiver::MMappedFile>* _mmappedModel;
	vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>* _classesByString;
	vector<long long, std::__1::allocator<long long>>* _classesByInt;
	vector<unsigned char, std::__1::allocator<unsigned char>> _cachedModel;

}

@property (nonatomic,retain) MLUpdateProgressHandlers * progressHandlers;                             //@synthesize progressHandlers=_progressHandlers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> progressHandlersDispatchQueue;              //@synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL continueWithUpdate;                                                 //@synthesize continueWithUpdate=_continueWithUpdate - In the implementation block
@property (assign,nonatomic) BOOL personalization;                                                    //@synthesize personalization=_personalization - In the implementation block
@property (nonatomic,retain) MLParameterContainer * parameterContainer;                               //@synthesize parameterContainer=_parameterContainer - In the implementation block
@property (assign,nonatomic) vector<std::__1::basic_string<char classesByString;                      //@synthesize classesByString=_classesByString - In the implementation block
@property (assign,nonatomic) vector<long long classesByInt;                                           //@synthesize classesByInt=_classesByInt - In the implementation block
@property (assign,nonatomic) unsigned long long numDimensions;                                        //@synthesize numDimensions=_numDimensions - In the implementation block
@property (assign,nonatomic) shared_ptr<Archiver::MMappedFile>* mmappedModel;                         //@synthesize mmappedModel=_mmappedModel - In the implementation block
@property (assign,nonatomic) vector<unsigned char cachedModel;                                        //@synthesize cachedModel=_cachedModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loadModelFromCompiledArchive:(MLModelInputArchiver*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)parameterValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)updateModelWithData:(id)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg1 ;
-(void)resumeUpdate;
-(void)cancelUpdate;
-(MLUpdateProgressHandlers *)progressHandlers;
-(void)setProgressHandlers:(MLUpdateProgressHandlers *)arg1 ;
-(NSObject*<OS_dispatch_queue>)progressHandlersDispatchQueue;
-(void)setProgressHandlersDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)updateParameters;
-(BOOL)continueWithUpdate;
-(void)setContinueWithUpdate:(BOOL)arg1 ;
-(MLParameterContainer *)parameterContainer;
-(void)setParameterContainer:(MLParameterContainer *)arg1 ;
-(id)parameterValueForKey:(id)arg1 ;
-(unsigned long long)numDimensions;
-(void)setNumDimensions:(unsigned long long)arg1 ;
-(id)initWithCompiledArchive:(MLModelInputArchiver*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)loadParameterDescriptionsAndContainerFromConfiguration:(id)arg1 modelDescription:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBoosterParameters:(void*)arg1 error:(id*)arg2 ;
-(BOOL)personalization;
-(void)setPersonalization:(BOOL)arg1 ;
-(vector<std::__1::basic_string<char)classesByString;
-(void)setClassesByString:(vector<std::__1::basic_string<char)arg1 ;
-(vector<long long)classesByInt;
-(void)setClassesByInt:(vector<long long)arg1 ;
-(shared_ptr<Archiver::MMappedFile>*)mmappedModel;
-(void)setMmappedModel:(shared_ptr<Archiver::MMappedFile>*)arg1 ;
-(vector<unsigned char)cachedModel;
-(void)setCachedModel:(vector<unsigned char)arg1 ;
@end

