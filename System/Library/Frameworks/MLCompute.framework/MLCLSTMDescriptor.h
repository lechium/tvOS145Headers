/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCLSTMDescriptor : NSObject <NSCopying> {

	BOOL _usesBiases;
	BOOL _batchFirst;
	BOOL _isBidirectional;
	BOOL _returnsSequences;
	float _dropout;
	unsigned long long _inputSize;
	unsigned long long _hiddenSize;
	unsigned long long _layerCount;
	unsigned long long _resultMode;

}

@property (nonatomic,readonly) unsigned long long inputSize;               //@synthesize inputSize=_inputSize - In the implementation block
@property (nonatomic,readonly) unsigned long long hiddenSize;              //@synthesize hiddenSize=_hiddenSize - In the implementation block
@property (nonatomic,readonly) unsigned long long layerCount;              //@synthesize layerCount=_layerCount - In the implementation block
@property (nonatomic,readonly) BOOL usesBiases;                            //@synthesize usesBiases=_usesBiases - In the implementation block
@property (nonatomic,readonly) BOOL batchFirst;                            //@synthesize batchFirst=_batchFirst - In the implementation block
@property (nonatomic,readonly) BOOL isBidirectional;                       //@synthesize isBidirectional=_isBidirectional - In the implementation block
@property (nonatomic,readonly) BOOL returnsSequences;                      //@synthesize returnsSequences=_returnsSequences - In the implementation block
@property (nonatomic,readonly) float dropout;                              //@synthesize dropout=_dropout - In the implementation block
@property (nonatomic,readonly) unsigned long long resultMode;              //@synthesize resultMode=_resultMode - In the implementation block
+(id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(BOOL)arg4 isBidirectional:(BOOL)arg5 dropout:(float)arg6 ;
+(id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(BOOL)arg4 batchFirst:(BOOL)arg5 isBidirectional:(BOOL)arg6 dropout:(float)arg7 ;
+(id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(BOOL)arg4 batchFirst:(BOOL)arg5 isBidirectional:(BOOL)arg6 returnsSequences:(BOOL)arg7 dropout:(float)arg8 ;
+(id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(BOOL)arg4 batchFirst:(BOOL)arg5 isBidirectional:(BOOL)arg6 returnsSequences:(BOOL)arg7 dropout:(float)arg8 resultMode:(unsigned long long)arg9 ;
+(id)descriptorWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)bias;
-(unsigned long long)numberOfLayers;
-(unsigned long long)layerCount;
-(unsigned long long)inputSize;
-(BOOL)batchFirst;
-(float)dropout;
-(BOOL)isBidirectional;
-(BOOL)returnsSequences;
-(id)initWithInputSize:(unsigned long long)arg1 hiddenSize:(unsigned long long)arg2 layerCount:(unsigned long long)arg3 usesBiases:(BOOL)arg4 batchFirst:(BOOL)arg5 isBidirectional:(BOOL)arg6 returnsSequences:(BOOL)arg7 dropout:(float)arg8 resultMode:(unsigned long long)arg9 ;
-(unsigned long long)hiddenSize;
-(BOOL)usesBiases;
-(unsigned long long)resultMode;
@end

