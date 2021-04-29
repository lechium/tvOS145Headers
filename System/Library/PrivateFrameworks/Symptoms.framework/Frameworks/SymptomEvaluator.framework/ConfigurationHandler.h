/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)sharedInstance;
+(void)setConfigurationObject:(id)arg1 forName:(id)arg2 ;
+(int)read:(id)arg1 returnedValues:(id)arg2 ;
+(id)objectForName:(id)arg1 ;
+(id)classRepresentativeForName:(id)arg1 ;
+(void)dumpAll;
+(int)configureItems:(id)arg1 ;
-(id)init;
-(void)setAnnotation:(id)arg1 ;
-(int)configure:(id)arg1 ;
-(void)_dumpState;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_setAnnotation:(id)arg1 ;
-(id)_configureHandlerClass:(id)arg1 ;
-(id)_configureBuildDetails:(id)arg1 ;
@end

