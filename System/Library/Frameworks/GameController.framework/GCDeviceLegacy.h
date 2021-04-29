/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString;


@protocol GCDeviceLegacy <NSObject>
@property (nonatomic,readonly) NSArray * hidServices; 
@property (assign,getter=areAllHIDDevicesConnected,nonatomic) BOOL allHIDDevicesConnected; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,readonly) NSString * productCategory; 
@required
-(void)handleEvent:(IOHIDEventRef)arg1;
-(BOOL)isPublished;
-(void)setPublished:(BOOL)arg1;
-(NSArray *)hidServices;
-(NSString *)productCategory;
-(BOOL)areAllHIDDevicesConnected;
-(void)setAllHIDDevicesConnected:(BOOL)arg1;
-(void)addServiceRefsWithDevice:(id)arg1;
-(void)addServiceRef:(id)arg1;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1;
-(void)clearServiceRef;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1;

@end

