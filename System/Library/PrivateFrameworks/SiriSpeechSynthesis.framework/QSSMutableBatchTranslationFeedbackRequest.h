/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSBatchTranslationFeedbackRequest.h>

@class NSString;

@interface QSSMutableBatchTranslationFeedbackRequest : QSSBatchTranslationFeedbackRequest

@property (nonatomic,copy) NSString * source_content; 
@property (nonatomic,copy) NSString * translated_content; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * errors; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * source_language; 
@property (nonatomic,copy) NSString * target_language; 
@property (nonatomic,copy) NSString * safari_version; 
@property (nonatomic,copy) NSString * app_id; 
@property (nonatomic,copy) NSString * os_version; 
@property (nonatomic,copy) NSString * device_type; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)errors;
-(void)setErrors:(NSString *)arg1 ;
-(NSString *)device_type;
-(void)setDevice_type:(NSString *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(NSString *)app_id;
-(NSString *)session_id;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)source_language;
-(NSString *)target_language;
-(NSString *)source_content;
-(NSString *)translated_content;
-(NSString *)safari_version;
-(NSString *)os_version;
-(void)setSource_language:(NSString *)arg1 ;
-(void)setTarget_language:(NSString *)arg1 ;
-(void)setSource_content:(NSString *)arg1 ;
-(void)setTranslated_content:(NSString *)arg1 ;
-(void)setSafari_version:(NSString *)arg1 ;
-(void)setOs_version:(NSString *)arg1 ;
@end

