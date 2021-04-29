/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BKSHIDKeyboardDeviceProperties.h>

@class NSString;

@interface BKSMutableHIDKeyboardDeviceProperties : BKSHIDKeyboardDeviceProperties

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * layout; 
@property (assign,nonatomic) unsigned char countryCode; 
@property (assign,nonatomic) unsigned standardType; 
@property (assign,nonatomic) long long subinterfaceID; 
@property (assign,nonatomic) BOOL capsLockKeyHasLanguageSwitchLabel; 
-(void)setLanguage:(NSString *)arg1 ;
-(void)setLayout:(NSString *)arg1 ;
-(void)setCountryCode:(unsigned char)arg1 ;
-(void)setStandardType:(unsigned)arg1 ;
-(void)setSubinterfaceID:(long long)arg1 ;
-(void)setCapsLockKeyHasLanguageSwitchLabel:(BOOL)arg1 ;
@end
