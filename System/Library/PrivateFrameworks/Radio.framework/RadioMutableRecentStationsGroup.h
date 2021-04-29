/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Radio/Radio-Structs.h>
#import <Radio/RadioRecentStationsGroup.h>

@class NSString, NSArray;

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (nonatomic,copy) NSArray * stations; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setStations:(NSArray *)arg1 ;
@end
