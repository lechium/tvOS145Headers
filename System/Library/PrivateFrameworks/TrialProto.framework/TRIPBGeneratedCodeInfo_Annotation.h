/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBInt32Array, NSString;

@interface TRIPBGeneratedCodeInfo_Annotation : TRIPBMessage

@property (nonatomic,retain) TRIPBInt32Array * pathArray; 
@property (nonatomic,readonly) unsigned long long pathArray_Count; 
@property (nonatomic,copy) NSString * sourceFile; 
@property (assign,nonatomic) BOOL hasSourceFile; 
@property (assign,nonatomic) int begin; 
@property (assign,nonatomic) BOOL hasBegin; 
@property (assign,nonatomic) int end; 
@property (assign,nonatomic) BOOL hasEnd; 
+(id)descriptor;
@end

