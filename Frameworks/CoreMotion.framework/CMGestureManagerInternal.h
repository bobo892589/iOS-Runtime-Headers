/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CMGestureManagerInternal : NSObject {
    id fGestureHandler;
    struct CLConnectionClient { struct basic_string<char, std::char_traits<char>, std::allocator<char> > { struct _Alloc_hider { char *x_1_2_1; } x_1_1_1; } x1; struct dispatch_queue_s {} *x2; struct dispatch_queue_s {} *x3; struct dispatch_queue_s {} *x4; struct CLConnection {} *x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::char_traits<char>, std::allocator<char> > { struct _Alloc_hider { char *x_1_2_1; } x_8_1_1; } x8; id x9; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x10; id x11; void*x12; struct map<std::basic_string<char>, void (^)(CLConnectionMessage *), std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>> >={_Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>, std::_Select1st<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>> >={_Rb_tree_impl<std::less<std::basic_string<char>>, false>={less<std::basic_string<char> >= {} x13; struct _Rb_tree_node_base { int x_14_1_1; struct _Rb_tree_node_base {} *x_14_1_2; struct _Rb_tree_node_base {} *x_14_1_3; struct _Rb_tree_node_base {} *x_14_1_4; } x14; unsigned int x15; } *fLocationdConnection;
    int fPriority;
    struct dispatch_queue_s { } *fPrivateQueue;
    struct dispatch_source_s { } *fWatchDogTimer;
}

- (void)dealloc;
- (id)initWithPriority:(int)arg1;
- (void)startGestureUpdatesWithHandlerPrivate:(id)arg1;
- (void)startWatchdogCheckinsPrivate;
- (void)stopGestureUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;

@end