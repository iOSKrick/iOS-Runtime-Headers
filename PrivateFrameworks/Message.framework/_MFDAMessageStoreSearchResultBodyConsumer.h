/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFDAStreamingContentConsumer>, MFError, MFConditionLock;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {
    MFConditionLock *_doneCondition;
    <MFDAStreamingContentConsumer> *_streamConsumer;
    MFError *_error;
}

@property(retain) <MFDAStreamingContentConsumer> * streamConsumer;
@property(retain) MFError * error;


- (void)searchResultFetchedWithResponses:(id)arg1;
- (void)setStreamConsumer:(id)arg1;
- (id)streamConsumer;
- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)waitUntilDone;
- (void)setError:(id)arg1;
- (id)error;
- (id)init;
- (void)dealloc;

@end