/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * fullsize; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSURL * largeSize; 
@property (nonatomic,copy) NSURL * maximumSize; 
@property (nonatomic,retain) SAUIAppPunchOut * photoPunchOut; 
@property (nonatomic,copy) NSURL * thumbnail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photo;
+(id)photoWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSURL *)thumbnail;
-(void)setThumbnail:(NSURL *)arg1 ;
-(void)setMaximumSize:(NSURL *)arg1 ;
-(NSURL *)maximumSize;
-(id)encodedClassName;
-(NSURL *)fullsize;
-(void)setFullsize:(NSURL *)arg1 ;
-(NSURL *)largeSize;
-(void)setLargeSize:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)photoPunchOut;
-(void)setPhotoPunchOut:(SAUIAppPunchOut *)arg1 ;
@end
