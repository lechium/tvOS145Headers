/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(RWIProtocolCSSStyle *)style;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(id)initWithName:(id)arg1 style:(id)arg2 ;
@end

