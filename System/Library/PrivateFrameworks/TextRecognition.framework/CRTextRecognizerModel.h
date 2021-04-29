/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRTextRecognizerModel <NSObject,CRTextRecognizerModelInputProvider>
@property (assign,nonatomic) int* codemapArray; 
@property (assign,nonatomic) long long ctcBlankLabelIndex; 
@required
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2;
-(id)predictFromInputs:(id)arg1 error:(id*)arg2;
-(int*)codemapArray;
-(long long)ctcBlankLabelIndex;
-(void)setCodemapArray:(int*)arg1;
-(void)setCtcBlankLabelIndex:(long long)arg1;

@end
