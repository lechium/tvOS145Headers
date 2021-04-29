/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface DESPFLEncryptor : NSObject {

	NSDictionary* _recipeUserInfo;
	NSString* _privatizationIdentifier;
	long long _version;
	double _weight;
	/*^block*/id _privatizer;

}

@property (nonatomic,copy) id privatizer;                                   //@synthesize privatizer=_privatizer - In the implementation block
@property (nonatomic,copy) NSString * privatizationIdentifier;              //@synthesize privatizationIdentifier=_privatizationIdentifier - In the implementation block
@property (assign,nonatomic) long long version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double weight;                                 //@synthesize weight=_weight - In the implementation block
+(void)initialize;
+(BOOL)privatizationSupported;
-(id)init;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(id)initWithRecipeUserInfo:(id)arg1 ;
-(id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 inPlaceNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_newNoiseable;
-(void)_maybeQuantizeDataTransportOfNoisable:(id)arg1 ;
-(id)_encryptedDataWithPublicKey:(id)arg1 noiseable:(id)arg2 error:(id*)arg3 ;
-(id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataNumbers:(double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataFloatNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)_requestedTransport;
-(id)initWithRecipe:(id)arg1 ;
-(id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 numbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 dataNumbers:(const double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 dataFloatNumbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSString *)privatizationIdentifier;
-(void)setPrivatizationIdentifier:(NSString *)arg1 ;
-(id)privatizer;
-(void)setPrivatizer:(id)arg1 ;
@end

