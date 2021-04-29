/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, GPBStruct, GPBListValue;

@interface GPBValue : GPBMessage

@property (nonatomic,readonly) int kindOneOfCase; 
@property (assign,nonatomic) int nullValue; 
@property (assign,nonatomic) double numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) GPBStruct * structValue; 
@property (nonatomic,retain) GPBListValue * listValue; 
+(id)descriptor;
@end

