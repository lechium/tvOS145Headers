/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty

@property (nonatomic,retain) NSString * fmtype; 
@property (nonatomic,retain) NSString * managed_id; 
@property (nonatomic,retain) NSString * managed_filename; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) BOOL x_apple_autoarchived; 
@property (nonatomic,retain) NSString * x_apple_filename; 
@property (nonatomic,retain) NSString * x_apple_ews_attachmentid; 
-(int)size;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setData:(id)arg1 ;
-(id)filename;
-(void)setSize:(int)arg1 ;
-(BOOL)shouldObscureValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSString *)managed_filename;
-(NSString *)x_apple_filename;
-(BOOL)isBinary;
-(NSString *)managed_id;
-(void)setManaged_id:(NSString *)arg1 ;
-(NSString *)fmtype;
-(void)setFmtype:(NSString *)arg1 ;
-(BOOL)x_apple_autoarchived;
-(void)setX_apple_autoarchived:(BOOL)arg1 ;
-(void)setManaged_filename:(NSString *)arg1 ;
-(void)setX_apple_filename:(NSString *)arg1 ;
-(NSString *)x_apple_ews_attachmentid;
-(void)setX_apple_ews_attachmentid:(NSString *)arg1 ;
@end

